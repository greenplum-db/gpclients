/**
    Copyright (C) 1995, 1996 by Ke Jin <kejin@visigenic.com>
	Enhanced for unixODBC (1999) by Peter Harvey <pharvey@codebydesign.com>
	
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
**/
#include "driver.h"

RETCODE SQL_API SQLPrepare(
								  HSTMT hstmt,
								  UCHAR*   szSqlStr,
								  SDWORD   cbSqlStr )
{
	stmt_t* pstmt = hstmt;

	UNSET_ERROR( pstmt->herr );

	return nnodbc_sqlprepare(hstmt, (char*)szSqlStr, cbSqlStr);
}


