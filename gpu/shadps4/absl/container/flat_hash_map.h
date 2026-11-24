#pragma once
#include <unordered_map>
namespace absl {
template <class K, class V, class H = std::hash<K>, class E = std::equal_to<K>,
          class A = std::allocator<std::pair<const K, V>>>
using flat_hash_map = std::unordered_map<K, V, H, E, A>;
}
