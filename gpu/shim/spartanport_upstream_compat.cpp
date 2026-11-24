// spartanport: stubs for upstream shadPS4 subsystems the port does not use.
// Keeps the upstream video_core linkable without the full emulator frontend.
#include <atomic>
#include <chrono>
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>
#include <span>
#include <vulkan/vulkan.h>
#include "common/types.h"

namespace Common {
void* ReserveMemoryPages(std::size_t size) noexcept { return malloc(size); }
void CommitMemoryPages(void*, std::size_t) noexcept {}
void ReleaseMemoryPages(void* p, std::size_t) noexcept { free(p); }
} // namespace Common

namespace Vulkan {
std::atomic<u64> g_spartanport_guest_wait_ns{0}, g_spartanport_compiles{0},
    g_spartanport_snapshot_ns{0}, g_spartanport_compile_wait_ns{0},
    g_spartanport_pending_draws{0}, g_spartanport_async_ns{0},
    g_spartanport_capture_ns{0}, g_spartanport_compile_ns{0};
namespace FrameCapture {
void OnFlip(VAddr) {}
void AddDisplayBuffer(VAddr) {}
void Request() {}
} // namespace FrameCapture
} // namespace Vulkan

namespace Libraries::SystemService {
bool IsSplashVisible() { return false; }
} // namespace Libraries::SystemService

// stb_image_write (upstream present screenshots; not used by the port)
extern "C" int stbi_write_png_to_func(int (*)(void*, void*, int), void*, int, int, int,
                                      const void*, int) { return 0; }

// ImGui frontend helpers: no-op implementations of upstream declarations.
#include "imgui/imgui_layer.h"
#include "imgui/imgui_texture.h"
#include "core/devtools/layer.h"
namespace ImGui {
void Layer::AddLayer(Layer*) {}
void Layer::RemoveLayer(Layer*) {}
namespace Friends { void Register() {} void Unregister() {} }
namespace InvitationPrompt { void Register() {} void Unregister() {} }
namespace ShadNetNotify { void Register() {} void Unregister() {} }
RefCountedTexture::RefCountedTexture() = default;
RefCountedTexture::~RefCountedTexture() = default;
} // namespace ImGui
namespace Core::Devtools {
void Layer::Draw() {}
bool Layer::ShouldKeepDrawing() { return false; }
void Layer::DrawNullGpuNotice() {}
} // namespace Core::Devtools

namespace shadNotifications {
enum class position {};
void QueueNotification(std::string, float, position, std::vector<u8>, bool) {}
} // namespace shadNotifications

