
#include "gtest/gtest.h"

#include "crypto/curve.hpp"

#include "fixtures/identity.hpp"
#include "fixtures/message.hpp"
using namespace Ark::Crypto;
using namespace fixtures::identity;
using namespace fixtures::message;

TEST(crypto, curve_ecdsa_sign_null_hash32_sha256) {
  std::vector<uint8_t> signature;
  Curve::Ecdsa::sign(tMessageSha256Bytes.data(),
                     nullptr,
                     signature);
  ASSERT_FALSE(Curve::Ecdsa::verify(tMessageSha256Bytes.data(),
                                    tPublicKeyBytes.data(),
                                    signature));
}