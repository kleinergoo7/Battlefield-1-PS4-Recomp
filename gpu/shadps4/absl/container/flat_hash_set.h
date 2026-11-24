#pragma once
#include <unordered_set>
namespace absl {
template <class K, class H = std::hash<K>, class E = std::equal_to<K>, class A = std::allocator<K>>
using flat_hash_set = std::unordered_set<K, H, E, A>;
}
