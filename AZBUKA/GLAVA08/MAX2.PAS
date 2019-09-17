PROGRAM MAX2(INPUT,OUTPUT);
VAR A,B,M:REAL;
BEGIN
READ(A,B); (* читать значения A и B *)
IF A > B
    THEN M:=A (* A больше B *)
    ELSE M:=B; (* A ­не больше B *)
WRITE(M);
END.