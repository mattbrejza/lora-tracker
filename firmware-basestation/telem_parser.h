uint8_t parse_ascii(char *buff, uint16_t max_in_len, char *call, uint32_t *seq,
		uint32_t *time, char *lati, char *longi, int32_t *alt, uint8_t max_out_len);
uint8_t parse_habpack(char *buff, uint16_t max_in_len, char *call, uint32_t *seq,
		uint32_t *time, int32_t *lati, int32_t *longi, int32_t *alt, uint8_t max_out_len);
