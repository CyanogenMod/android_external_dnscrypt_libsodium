#ifndef crypto_verify_16_H
#define crypto_verify_16_H

#define crypto_verify_16_BYTES 16

#ifdef __cplusplus
extern "C" {

#endif
int crypto_verify_16(const unsigned char *x, const unsigned char *y);
#define crypto_verify_16_ref crypto_verify_16

#ifdef __cplusplus
}
#endif

#endif
