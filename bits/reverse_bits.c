unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char res;
	int index;

	index = 8;
	res = 0;
	while (index > 0)
	{
		//    desp<Izq  Ultimo bit(0 -> par, 1 -> impar), se agrega a res en la pos. mas baja
		res = res * 2 + (octet % 2);
		//      desp>Der, elinina el ultimo bit añadido a res
		octet = octet / 2;
		index--; 
	}
	return res;
	
}
