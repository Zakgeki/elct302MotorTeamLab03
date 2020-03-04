#pragma once

#define round(x)   ( ( x ) >= 0?( long )( ( x ) + 0.5 ):( long )( ( x ) - 0.5 ) )
#define round2(x)  ( round( x * 1.0e2 ) * 1.0e-2 )
#define round3(x)  ( round( x * 1.0e3 ) * 1.0e-3 )
#define round4(x)  ( round( x * 1.0e4 ) * 1.0e-4 )
#define round5(x)  ( round( x * 1.0e5 ) * 1.0e-5 )