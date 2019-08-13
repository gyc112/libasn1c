#ifndef	SSP_ENCODE
#define	SSP_ENCODE

#ifdef __cplusplus
extern "C" {
#endif


	bool ssp_encode_fixlen_int(int i_in, char *ch_out, int *len_out);
	bool ssp_encode_fixlen_str(char *ch_in, int len_in, char *ch_out, int *len_out);

#ifdef __cplusplus
}
#endif

#endif	