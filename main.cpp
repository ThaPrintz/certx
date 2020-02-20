#include <stdio.h>
#include <wolfssl/options.h>
#include <wolfssl/wolfcrypt/settings.h>
#include <wolfssl/wolfcrypt/ecc.h>
#include <wolfssl/wolfcrypt/asn_public.h>
#include <wolfssl/wolfcrypt/asn.h>
#include <wolfssl/wolfcrypt/error-crypt.h>

#define WOLFSSL_CERT_REQ
#define WOLFSSL_CERT_GEN

#define HAVE_ECC

int main(void)
{

    Cert newCert;

    FILE* file;
    char certToUse[] = "./ca-cert.der";
    char caKeyFile[] = "./ca-key.der";
    char newCertOutput[] = "./newCert.der";

    int derBufSz;
    int caKeySz;

    byte* derBuf = NULL;
    byte* pemBuf = NULL;
    byte* caKeyBuf = NULL;

    /* for MakeCert and SignCert */
    WC_RNG rng;
    ecc_key caKey;
    ecc_key newKey;
    word32 idx3 = 0;
}