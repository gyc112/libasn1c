#ifndef	SSP_DECODE
#define	SSP_DECODE

#ifdef __cplusplus
extern "C" {
#endif

	bool ssp_decode_fixlen_int(char *ch_in, int *ch_out, int *len_out);
	bool ssp_decode_fixlen_str(char *ch_in, int len_in, char *ch_out, int *len_out);

#ifdef __cplusplus
}
#endif

#endif	