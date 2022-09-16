main.h.txt

Who has access

A

System properties

Type

Text

Size

456 bytes

Storage used

456 bytes

Location

More functions, more nested loops

Owner

Antony Bahati

Modified

Sep 15, 2022 by Antony Bahati

Opened

11:16 PM by me

Created

Sep 15, 2022

No description

Viewers can download

#include "main.h"

/**
*_isdigit - checks whether a  character is a digit or not
*@c: tested character
*Return: 1 if it is, 0 otherwise
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
