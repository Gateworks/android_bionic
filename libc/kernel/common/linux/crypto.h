/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _LINUX_CRYPTO_H
#define _LINUX_CRYPTO_H
#include <linux/atomic.h>
#include <linux/kernel.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/list.h>
#include <linux/bug.h>
#include <linux/slab.h>
#include <linux/string.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/uaccess.h>
#define CRYPTO_ALG_TYPE_MASK 0x0000000f
#define CRYPTO_ALG_TYPE_CIPHER 0x00000001
#define CRYPTO_ALG_TYPE_COMPRESS 0x00000002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CRYPTO_ALG_TYPE_AEAD 0x00000003
#define CRYPTO_ALG_TYPE_BLKCIPHER 0x00000004
#define CRYPTO_ALG_TYPE_ABLKCIPHER 0x00000005
#define CRYPTO_ALG_TYPE_GIVCIPHER 0x00000006
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CRYPTO_ALG_TYPE_DIGEST 0x00000008
#define CRYPTO_ALG_TYPE_HASH 0x00000008
#define CRYPTO_ALG_TYPE_SHASH 0x00000009
#define CRYPTO_ALG_TYPE_AHASH 0x0000000a
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CRYPTO_ALG_TYPE_RNG 0x0000000c
#define CRYPTO_ALG_TYPE_PCOMPRESS 0x0000000f
#define CRYPTO_ALG_TYPE_HASH_MASK 0x0000000e
#define CRYPTO_ALG_TYPE_AHASH_MASK 0x0000000c
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CRYPTO_ALG_TYPE_BLKCIPHER_MASK 0x0000000c
#define CRYPTO_ALG_LARVAL 0x00000010
#define CRYPTO_ALG_DEAD 0x00000020
#define CRYPTO_ALG_DYING 0x00000040
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CRYPTO_ALG_ASYNC 0x00000080
#define CRYPTO_ALG_NEED_FALLBACK 0x00000100
#define CRYPTO_ALG_GENIV 0x00000200
#define CRYPTO_ALG_TESTED 0x00000400
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CRYPTO_ALG_INSTANCE 0x00000800
#define CRYPTO_ALG_KERN_DRIVER_ONLY 0x00001000
#define CRYPTO_TFM_REQ_MASK 0x000fff00
#define CRYPTO_TFM_RES_MASK 0xfff00000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CRYPTO_TFM_REQ_WEAK_KEY 0x00000100
#define CRYPTO_TFM_REQ_MAY_SLEEP 0x00000200
#define CRYPTO_TFM_REQ_MAY_BACKLOG 0x00000400
#define CRYPTO_TFM_RES_WEAK_KEY 0x00100000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CRYPTO_TFM_RES_BAD_KEY_LEN 0x00200000
#define CRYPTO_TFM_RES_BAD_KEY_SCHED 0x00400000
#define CRYPTO_TFM_RES_BAD_BLOCK_LEN 0x00800000
#define CRYPTO_TFM_RES_BAD_FLAGS 0x01000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CRYPTO_MAX_ALG_NAME 64
#define CRYPTO_MINALIGN ARCH_KMALLOC_MINALIGN
#define CRYPTO_MINALIGN_ATTR __attribute__ ((__aligned__(CRYPTO_MINALIGN)))
struct scatterlist;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct crypto_ablkcipher;
struct crypto_async_request;
struct crypto_aead;
struct crypto_blkcipher;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct crypto_hash;
struct crypto_rng;
struct crypto_tfm;
struct crypto_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct aead_givcrypt_request;
struct skcipher_givcrypt_request;
typedef void (*crypto_completion_t)(struct crypto_async_request *req, int err);
struct crypto_async_request {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 crypto_completion_t complete;
 void *data;
 struct crypto_tfm *tfm;
 u32 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ablkcipher_request {
 struct crypto_async_request base;
 unsigned int nbytes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *info;
 struct scatterlist *src;
 struct scatterlist *dst;
 void *__ctx[] CRYPTO_MINALIGN_ATTR;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct aead_request {
 struct crypto_async_request base;
 unsigned int assoclen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int cryptlen;
 u8 *iv;
 struct scatterlist *assoc;
 struct scatterlist *src;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct scatterlist *dst;
 void *__ctx[] CRYPTO_MINALIGN_ATTR;
};
struct blkcipher_desc {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct crypto_blkcipher *tfm;
 void *info;
 u32 flags;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct cipher_desc {
 struct crypto_tfm *tfm;
 void (*crfn)(struct crypto_tfm *tfm, u8 *dst, const u8 *src);
 unsigned int (*prfn)(const struct cipher_desc *desc, u8 *dst,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const u8 *src, unsigned int nbytes);
 void *info;
};
struct hash_desc {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct crypto_hash *tfm;
 u32 flags;
};
struct ablkcipher_alg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*setkey)(struct crypto_ablkcipher *tfm, const u8 *key,
 unsigned int keylen);
 int (*encrypt)(struct ablkcipher_request *req);
 int (*decrypt)(struct ablkcipher_request *req);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*givencrypt)(struct skcipher_givcrypt_request *req);
 int (*givdecrypt)(struct skcipher_givcrypt_request *req);
 const char *geniv;
 unsigned int min_keysize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int max_keysize;
 unsigned int ivsize;
};
struct aead_alg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*setkey)(struct crypto_aead *tfm, const u8 *key,
 unsigned int keylen);
 int (*setauthsize)(struct crypto_aead *tfm, unsigned int authsize);
 int (*encrypt)(struct aead_request *req);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*decrypt)(struct aead_request *req);
 int (*givencrypt)(struct aead_givcrypt_request *req);
 int (*givdecrypt)(struct aead_givcrypt_request *req);
 const char *geniv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int ivsize;
 unsigned int maxauthsize;
};
struct blkcipher_alg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*setkey)(struct crypto_tfm *tfm, const u8 *key,
 unsigned int keylen);
 int (*encrypt)(struct blkcipher_desc *desc,
 struct scatterlist *dst, struct scatterlist *src,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int nbytes);
 int (*decrypt)(struct blkcipher_desc *desc,
 struct scatterlist *dst, struct scatterlist *src,
 unsigned int nbytes);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *geniv;
 unsigned int min_keysize;
 unsigned int max_keysize;
 unsigned int ivsize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct cipher_alg {
 unsigned int cia_min_keysize;
 unsigned int cia_max_keysize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*cia_setkey)(struct crypto_tfm *tfm, const u8 *key,
 unsigned int keylen);
 void (*cia_encrypt)(struct crypto_tfm *tfm, u8 *dst, const u8 *src);
 void (*cia_decrypt)(struct crypto_tfm *tfm, u8 *dst, const u8 *src);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct compress_alg {
 int (*coa_compress)(struct crypto_tfm *tfm, const u8 *src,
 unsigned int slen, u8 *dst, unsigned int *dlen);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*coa_decompress)(struct crypto_tfm *tfm, const u8 *src,
 unsigned int slen, u8 *dst, unsigned int *dlen);
};
struct rng_alg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*rng_make_random)(struct crypto_rng *tfm, u8 *rdata,
 unsigned int dlen);
 int (*rng_reset)(struct crypto_rng *tfm, u8 *seed, unsigned int slen);
 unsigned int seedsize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define cra_ablkcipher cra_u.ablkcipher
#define cra_aead cra_u.aead
#define cra_blkcipher cra_u.blkcipher
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cra_cipher cra_u.cipher
#define cra_compress cra_u.compress
#define cra_rng cra_u.rng
struct crypto_alg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 cra_flags;
 unsigned int cra_blocksize;
 unsigned int cra_ctxsize;
 unsigned int cra_alignmask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int cra_priority;
 atomic_t cra_refcnt;
 char cra_name[CRYPTO_MAX_ALG_NAME];
 char cra_driver_name[CRYPTO_MAX_ALG_NAME];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct crypto_type *cra_type;
 union {
 struct ablkcipher_alg ablkcipher;
 struct aead_alg aead;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct blkcipher_alg blkcipher;
 struct cipher_alg cipher;
 struct compress_alg compress;
 struct rng_alg rng;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } cra_u;
 int (*cra_init)(struct crypto_tfm *tfm);
 void (*cra_exit)(struct crypto_tfm *tfm);
 void (*cra_destroy)(struct crypto_alg *alg);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct module *cra_module;
};
struct ablkcipher_tfm {
 int (*setkey)(struct crypto_ablkcipher *tfm, const u8 *key,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int keylen);
 int (*encrypt)(struct ablkcipher_request *req);
 int (*decrypt)(struct ablkcipher_request *req);
 int (*givencrypt)(struct skcipher_givcrypt_request *req);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*givdecrypt)(struct skcipher_givcrypt_request *req);
 struct crypto_ablkcipher *base;
 unsigned int ivsize;
 unsigned int reqsize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct aead_tfm {
 int (*setkey)(struct crypto_aead *tfm, const u8 *key,
 unsigned int keylen);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*encrypt)(struct aead_request *req);
 int (*decrypt)(struct aead_request *req);
 int (*givencrypt)(struct aead_givcrypt_request *req);
 int (*givdecrypt)(struct aead_givcrypt_request *req);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct crypto_aead *base;
 unsigned int ivsize;
 unsigned int authsize;
 unsigned int reqsize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct blkcipher_tfm {
 void *iv;
 int (*setkey)(struct crypto_tfm *tfm, const u8 *key,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int keylen);
 int (*encrypt)(struct blkcipher_desc *desc, struct scatterlist *dst,
 struct scatterlist *src, unsigned int nbytes);
 int (*decrypt)(struct blkcipher_desc *desc, struct scatterlist *dst,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct scatterlist *src, unsigned int nbytes);
};
struct cipher_tfm {
 int (*cit_setkey)(struct crypto_tfm *tfm,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const u8 *key, unsigned int keylen);
 void (*cit_encrypt_one)(struct crypto_tfm *tfm, u8 *dst, const u8 *src);
 void (*cit_decrypt_one)(struct crypto_tfm *tfm, u8 *dst, const u8 *src);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct hash_tfm {
 int (*init)(struct hash_desc *desc);
 int (*update)(struct hash_desc *desc,
 struct scatterlist *sg, unsigned int nsg);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*final)(struct hash_desc *desc, u8 *out);
 int (*digest)(struct hash_desc *desc, struct scatterlist *sg,
 unsigned int nsg, u8 *out);
 int (*setkey)(struct crypto_hash *tfm, const u8 *key,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int keylen);
 unsigned int digestsize;
};
struct compress_tfm {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*cot_compress)(struct crypto_tfm *tfm,
 const u8 *src, unsigned int slen,
 u8 *dst, unsigned int *dlen);
 int (*cot_decompress)(struct crypto_tfm *tfm,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const u8 *src, unsigned int slen,
 u8 *dst, unsigned int *dlen);
};
struct rng_tfm {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*rng_gen_random)(struct crypto_rng *tfm, u8 *rdata,
 unsigned int dlen);
 int (*rng_reset)(struct crypto_rng *tfm, u8 *seed, unsigned int slen);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define crt_ablkcipher crt_u.ablkcipher
#define crt_aead crt_u.aead
#define crt_blkcipher crt_u.blkcipher
#define crt_cipher crt_u.cipher
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define crt_hash crt_u.hash
#define crt_compress crt_u.compress
#define crt_rng crt_u.rng
struct crypto_tfm {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 crt_flags;
 union {
 struct ablkcipher_tfm ablkcipher;
 struct aead_tfm aead;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct blkcipher_tfm blkcipher;
 struct cipher_tfm cipher;
 struct hash_tfm hash;
 struct compress_tfm compress;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rng_tfm rng;
 } crt_u;
 void (*exit)(struct crypto_tfm *tfm);
 struct crypto_alg *__crt_alg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *__crt_ctx[] CRYPTO_MINALIGN_ATTR;
};
struct crypto_ablkcipher {
 struct crypto_tfm base;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct crypto_aead {
 struct crypto_tfm base;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct crypto_blkcipher {
 struct crypto_tfm base;
};
struct crypto_cipher {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct crypto_tfm base;
};
struct crypto_comp {
 struct crypto_tfm base;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct crypto_hash {
 struct crypto_tfm base;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct crypto_rng {
 struct crypto_tfm base;
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CRYPTOA_UNSPEC,
 CRYPTOA_ALG,
 CRYPTOA_TYPE,
 CRYPTOA_U32,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __CRYPTOA_MAX,
};
#define CRYPTOA_MAX (__CRYPTOA_MAX - 1)
#define CRYPTO_MAX_ATTRS 32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct crypto_attr_alg {
 char name[CRYPTO_MAX_ALG_NAME];
};
struct crypto_attr_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 type;
 u32 mask;
};
struct crypto_attr_u32 {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 num;
};
struct crypto_tfm *crypto_alloc_base(const char *alg_name, u32 type, u32 mask);
struct crypto_ablkcipher *crypto_alloc_ablkcipher(const char *alg_name,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 type, u32 mask);
struct crypto_aead *crypto_alloc_aead(const char *alg_name, u32 type, u32 mask);
#endif
