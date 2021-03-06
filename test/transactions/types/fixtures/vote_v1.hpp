/**
 * This file is part of Ark Cpp Crypto.
 *
 * (c) Ark Ecosystem <info@ark.io>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 **/

#ifndef ARK_TRANSACTIONS_TYPES_FIXTURES_VOTE_V1_HPP
#define ARK_TRANSACTIONS_TYPES_FIXTURES_VOTE_V1_HPP

#include <cstdint>
#include <vector>

#include "common.hpp"

namespace v1 {

////////////////////////////////////////////////////////////////////////////////
constexpr uint8_t TYPE_3_TYPE           = 3U;
constexpr uint32_t TYPE_3_TIMESTAMP     = 41269366UL;
constexpr uint64_t TYPE_3_FEE           = 100000000ULL;
constexpr uint8_t TYPE_3_VOTE_COUNT     = 1U;

////////////////////////////////////////////////////////////////////////////////
// ff011e0376b87502034151a3ec46b5670a682b0a63394f863587d1bc97483b1b6c70eb58e7f0aed19200e1f50500000000000101022cca9529ec97a772156c152a00aad155ee6708243e65c9d211a589cb5d43234d304402204b8bb403e2db7f9599d46d0f5d39f8bb1d0663d875af7ec1154448e98466e86302201e92fb57e13fb729b07e1027fa3d6e3f28e0d5828ed2d7c53a5e8db08cb6d068304402201329882762a42d1af9079c822a9e3feefa47b7476b0afe61440637408958a64402206da179b08e31d9c784fbb23abe2c9b50353ed7881dc29787a5e8ecbee2dfda66
const std::vector<uint8_t> TYPE_3_BYTES = {
    255, 1,   30,  3,   118, 184, 117, 2,   3,   65,  81,  163, 236, 70,  181,
    103, 10,  104, 43,  10,  99,  57,  79,  134, 53,  135, 209, 188, 151, 72,
    59,  27,  108, 112, 235, 88,  231, 240, 174, 209, 146, 0,   225, 245, 5,
    0,   0,   0,   0,   0,   1,   1,   2,   44,  202, 149, 41,  236, 151, 167,
    114, 21,  108, 21,  42,  0,   170, 209, 85,  238, 103, 8,   36,  62,  101,
    201, 210, 17,  165, 137, 203, 93,  67,  35,  77,  48,  68,  2,   32,  75,
    139, 180, 3,   226, 219, 127, 149, 153, 212, 109, 15,  93,  57,  248, 187,
    29,  6,   99,  216, 117, 175, 126, 193, 21,  68,  72,  233, 132, 102, 232,
    99,  2,   32,  30,  146, 251, 87,  225, 63,  183, 41,  176, 126, 16,  39,
    250, 61,  110, 63,  40,  224, 213, 130, 142, 210, 215, 197, 58,  94,  141,
    176, 140, 182, 208, 104, 48,  68,  2,   32,  19,  41,  136, 39,  98,  164,
    45,  26,  249, 7,   156, 130, 42,  158, 63,  238, 250, 71,  183, 71,  107,
    10,  254, 97,  68,  6,   55,  64,  137, 88,  166, 68,  2,   32,  109, 161,
    121, 176, 142, 49,  217, 199, 132, 251, 178, 58,  190, 44,  155, 80,  53,
    62,  215, 136, 29,  194, 151, 135, 165, 232, 236, 190, 226, 223, 218, 102 };

////////////////////////////////////////////////////////////////////////////////
// (01) + pubKey...
// +022cca9529ec97a772156c152a00aad155ee6708243e65c9d211a589cb5d43234d
constexpr uint8_t TYPE_3_VOTE[] = {
    1,   2,   44, 202, 149, 41,  236, 151, 167, 114, 21, 108,
    21,  42,  0,  170, 209, 85,  238, 103, 8,   36,  62, 101,
    201, 210, 17, 165, 137, 203, 93,  67,  35,  77 };

////////////////////////////////////////////////////////////////////////////////
// 304402204b8bb403e2db7f9599d46d0f5d39f8bb1d0663d875af7ec1154448e98466e86302201e92fb57e13fb729b07e1027fa3d6e3f28e0d5828ed2d7c53a5e8db08cb6d068
constexpr uint8_t TYPE_3_SIGNATURE[] = {
    48,  68,  2,   32,  75,  139, 180, 3,  226, 219, 127, 149, 153, 212,
    109, 15,  93,  57,  248, 187, 29,  6,  99,  216, 117, 175, 126, 193,
    21,  68,  72,  233, 132, 102, 232, 99, 2,   32,  30,  146, 251, 87,
    225, 63,  183, 41,  176, 126, 16,  39, 250, 61,  110, 63,  40,  224,
    213, 130, 142, 210, 215, 197, 58,  94, 141, 176, 140, 182, 208, 104 };

////////////////////////////////////////////////////////////////////////////////
// 304402201329882762a42d1af9079c822a9e3feefa47b7476b0afe61440637408958a64402206da179b08e31d9c784fbb23abe2c9b50353ed7881dc29787a5e8ecbee2dfda66
constexpr uint8_t TYPE_3_SECOND_SIG[] = {
    48,  68,  2,   32,  19,  41,  136, 39,  98,  164, 45,  26,  249, 7,
    156, 130, 42,  158, 63,  238, 250, 71,  183, 71,  107, 10,  254, 97,
    68,  6,   55,  64,  137, 88,  166, 68,  2,   32,  109, 161, 121, 176,
    142, 49,  217, 199, 132, 251, 178, 58,  190, 44,  155, 80,  53,  62,
    215, 136, 29,  194, 151, 135, 165, 232, 236, 190, 226, 223, 218, 102 };

} // namespace v1

#endif
