ASSUME CS: CODE, DS: DATA
DATA SEGMENT
	LIST DB 04H, 05H, 06H, 09H
	COUNT EQU 04H
DATA ENDS
CODE SEGMENT
START:
	MOV AX, DATA
	MOV DS, AX
	MOV DX, COUNT-1
	MOV AH, 0000H
	MOV BH, 0000H
	MOV CX, DX
	MOV SI, OFFSET LIST
	MOV AL, [SI]
	L1: INC SI
	ADD AL,[SI]
	LOOP L1
	MOV BL, COUNT
	DIV BL
	INT 03H
CODE ENDS
END START