/*
 * Copyright (c) 2014 Andreas Dröscher <contiki@anticat.ch>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef CCM_GLUE_H_
#define CCM_GLUE_H_

#include "dtlscrypto.h"

#define DTLS_CCM_BLOCKSIZE  16	/**< size of hmac blocks */
#define DTLS_CCM_MAX        16	/**< max number of bytes in digest */
#define DTLS_CCM_NONCE_SIZE 12	/**< size of nonce */

extern int
hw_ccm_encrypt(aes128_ccm_t *ccm_ctx, const unsigned char *src, size_t srclen,
                 unsigned char *buf, unsigned char *nounce,
                 const unsigned char *aad, size_t la);

extern int
hw_ccm_decrypt(aes128_ccm_t *ccm_ctx, const unsigned char *src,
                 size_t srclen, unsigned char *buf,
                 unsigned char *nounce,
                 const unsigned char *aad, size_t la);

extern int
hw_ccm_set_key(const u_char *key, int bits);

#endif /* CCM_GLUE_H_ */
