#include <stdio.h>
#include <sys/types.h>
#include <Asn1cStdTest.h>
#include <Asn1cTestSeqOf.h>

char tab[256];

/*
* This is a custom function which writes the
* encoded output into a global test table
*/
static int decode_callback(const void *buffer, size_t size, void *app_key) 
{

	memcpy(&tab[0], buffer, size);

	return 0;
}


void testSeq()
{
	asn_enc_rval_t ec; /* Encoder return value */
	asn_dec_rval_t ed;

	void *structure = 0;
	static asn_codec_ctx_t s_codec_ctx;
	asn_codec_ctx_t *opt_codec_ctx = 0;

	Asn1cStdTest_t *associateReq; 
	Asn1cStdTest_t *associateReq1; 
	char accRef[128] = {0};
	char atuhPara[16] = {0};

	opt_codec_ctx = &s_codec_ctx;

	associateReq = (Asn1cStdTest_t*)calloc(1, sizeof(Asn1cStdTest_t)); 
	associateReq1 = (Asn1cStdTest_t*)calloc(1, sizeof(Asn1cStdTest_t)); 

	sprintf(accRef, "John");
	associateReq->assServerAccPointRef.buf = (uint8_t *)malloc(strlen(accRef));
	memcpy(associateReq->assServerAccPointRef.buf, accRef, strlen(accRef));
	associateReq->assServerAccPointRef.size = strlen(accRef);

	sprintf(atuhPara, "John");
	associateReq->assAuthPara.buf = (uint8_t *)malloc(strlen(atuhPara));
	memcpy(associateReq->assAuthPara.buf, atuhPara, strlen(atuhPara));
	associateReq->assAuthPara.size = strlen(atuhPara);

	associateReq->itest1 = 5;
	associateReq->itest2 = 5;
	associateReq->btest1 = 5;
	associateReq->btest2 = 1;
	associateReq->btest3 = 1;

	ec = aper_encode(&asn_DEF_Asn1cStdTest, associateReq, decode_callback, tab);

	if(ec.encoded == -1) {
		fprintf(stderr, "Encode Err (at %s)\n",
			ec.failed_type ? ec.failed_type->name : "unknown");
		exit(65); /* better, EX_DATAERR */
	}

	ed = aper_decode(opt_codec_ctx, &asn_DEF_Asn1cStdTest, (void **)&structure, tab, strlen(tab), 0, 0); 
	if (ed.code != RC_OK)
	{
		fprintf(stderr, "Decode Err .\n");
		exit(65); /* better, EX_DATAERR */
	}
	memcpy(associateReq1, (Asn1cStdTest_t *)structure, sizeof(Asn1cStdTest_t));
}

void testSeqof()
{
	asn_enc_rval_t ec; /* Encoder return value */
	asn_dec_rval_t ed;

	void *structure = 0;
	static asn_codec_ctx_t s_codec_ctx;
	asn_codec_ctx_t *opt_codec_ctx = 0;

	Asn1cTestSeqOf_t *associateReq; 
	Asn1cTestSeqOf_t *associateReq1; 
	char accRef[128] = {0};
	char atuhPara[16] = {0};
	PrintableString_t pStr1;
	PrintableString_t pStr2;
	PrintableString_t pStr3;

	opt_codec_ctx = &s_codec_ctx;

	associateReq = (Asn1cTestSeqOf_t*)calloc(1, sizeof(Asn1cTestSeqOf_t)); 
	associateReq1 = (Asn1cTestSeqOf_t*)calloc(1, sizeof(Asn1cTestSeqOf_t));

	associateReq->list.count = 3;
	
	associateReq->list.array = (PrintableString_t**)calloc(3, sizeof(PrintableString_t)); 
	associateReq->list.size = sizeof(PrintableString_t)*2;
	*(associateReq->list.array) = &pStr1;	
	*(associateReq->list.array+1) = &pStr2;	
	*(associateReq->list.array+2) = &pStr3;
	
	sprintf(accRef, "aaaaa");
	pStr1.buf = (uint8_t *)malloc(strlen(accRef));
	memcpy(pStr1.buf, accRef, strlen(accRef));
	pStr1.size = strlen(accRef);

	sprintf(accRef, "bbbbb");
	pStr2.buf = (uint8_t *)malloc(strlen(accRef));
	memcpy(pStr2.buf, accRef, strlen(accRef));
	pStr2.size = strlen(accRef);

	sprintf(accRef, "ccccc");
	pStr3.buf = (uint8_t *)malloc(strlen(accRef));
	memcpy(pStr3.buf, accRef, strlen(accRef));
	pStr3.size = strlen(accRef);


	ec = aper_encode(&asn_DEF_Asn1cTestSeqOf, associateReq, decode_callback, tab);
	if(ec.encoded == -1) {
		fprintf(stderr, "Encode Err (at %s)\n",
			ec.failed_type ? ec.failed_type->name : "unknown");
		exit(65); /* better, EX_DATAERR */
	}
	
	ed = aper_decode(opt_codec_ctx, &asn_DEF_Asn1cTestSeqOf, (void **)&structure, tab, strlen(tab), 0, 0); 
	if (ed.code != RC_OK)
	{
		fprintf(stderr, "Decode Err .\n");
		exit(65); /* better, EX_DATAERR */
	}
	memcpy(associateReq1, (Asn1cTestSeqOf_t *)structure, sizeof(Asn1cTestSeqOf_t));

	
}

void testFloat()
{
	asn_enc_rval_t ec; /* Encoder return value */
	asn_dec_rval_t ed;

	void *structure = 0;
	static asn_codec_ctx_t s_codec_ctx;
	asn_codec_ctx_t *opt_codec_ctx = 0;

	Asn1cStdTest_t *associateReq; 
	Asn1cStdTest_t *associateReq1; 
	char accRef[128] = {0};
	char atuhPara[16] = {0};

	opt_codec_ctx = &s_codec_ctx;

	associateReq = (Asn1cStdTest_t*)calloc(1, sizeof(Asn1cStdTest_t)); 
	associateReq1 = (Asn1cStdTest_t*)calloc(1, sizeof(Asn1cStdTest_t)); 

	sprintf(accRef, "John");
	associateReq->assServerAccPointRef.buf = (uint8_t *)malloc(strlen(accRef));
	memcpy(associateReq->assServerAccPointRef.buf, accRef, strlen(accRef));
	associateReq->assServerAccPointRef.size = strlen(accRef);

	sprintf(atuhPara, "John");
	associateReq->assAuthPara.buf = (uint8_t *)malloc(strlen(atuhPara));
	memcpy(associateReq->assAuthPara.buf, atuhPara, strlen(atuhPara));
	associateReq->assAuthPara.size = strlen(atuhPara);

	associateReq->itest1 = 5;
	associateReq->itest2 = 5;
	associateReq->btest1 = 5;
	associateReq->btest2 = 1;
	associateReq->btest3 = 1;

	ec = aper_encode(&asn_DEF_Asn1cStdTest, associateReq, decode_callback, tab);

	if(ec.encoded == -1) {
		fprintf(stderr, "Encode Err (at %s)\n",
			ec.failed_type ? ec.failed_type->name : "unknown");
		exit(65); /* better, EX_DATAERR */
	}

	ed = aper_decode(opt_codec_ctx, &asn_DEF_Asn1cStdTest, (void **)&structure, tab, strlen(tab), 0, 0); 
	if (ed.code != RC_OK)
	{
		fprintf(stderr, "Decode Err .\n");
		exit(65); /* better, EX_DATAERR */
	}
	memcpy(associateReq1, (Asn1cStdTest_t *)structure, sizeof(Asn1cStdTest_t));
}
int main()
{
	testSeq();
	testSeqof();
	return 0;
}