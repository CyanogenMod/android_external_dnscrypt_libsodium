#ifndef crypto_generichash_H
#define crypto_generichash_H

#include "crypto_generichash_blake2b.h"

#define crypto_generichash_BYTES_MIN crypto_generichash_blake2b_BYTES_MIN
#define crypto_generichash_BYTES_MAX crypto_generichash_blake2b_BYTES_MAX
#define crypto_generichash_KEYBYTES_MIN crypto_generichash_blake2b_KEYBYTES_MIN
#define crypto_generichash_KEYBYTES_MAX crypto_generichash_blake2b_KEYBYTES_MAX
#define crypto_generichash_PRIMITIVE "blake2b"

#ifdef __cplusplus
extern "C" {
#endif

typedef crypto_generichash_blake2b_state crypto_generichash_state;

int crypto_generichash(unsigned char *out, size_t outlen,
                       const unsigned char *in, unsigned long long inlen,
                       const unsigned char *key, size_t keylen);

int crypto_generichash_init(crypto_generichash_blake2b_state *state,
                            const unsigned char *key,
                            const size_t keylen, const size_t outlen);

int crypto_generichash_update(crypto_generichash_blake2b_state *state,
                              const unsigned char *in,
                              unsigned long long inlen);

int crypto_generichash_final(crypto_generichash_blake2b_state *state,
                             unsigned char *out, const size_t outlen);

#ifdef __cplusplus
}
#endif

#endif
