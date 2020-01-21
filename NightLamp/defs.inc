.def status	= r15	;Copy of Status Register
.def tmp	= r16	;General register
.def tcint	= r17	;Timer Compare Interrupt counter
.def secs   = r18	;Seconds counter
.def mins	= r19	;Minutes counter
.def hours	= r20	;Hours counter
.def system	= r21	;System flags: bit0=1/0(movement/not)

;Flags
.equ TIMER      = 0
.equ MOVEMENT   = 1

;I/O
.equ LAMP       = PB0	;Lamp (output)
.equ MOTION     = PB2	;Motion detector (input)