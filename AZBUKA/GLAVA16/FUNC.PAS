PROGRAM FUNC (INPUT, OUTPUT);
(*РАЗДЕЛ ПЕРЕМЕННЫХ*)
VAR X, Y, F: REAL;
(*РАЗДЕЛ ПРОЦЕДУР*)
FUNCTION SQRTM(X:REAL):REAL;
(*ПРОЦЕДУРА-ФУНКЦИЯ ВЫЧИСЛЕНИЯ КВАДРАТНОГО КОРНЯ*)
VAR XC,XH:REAL;
BEGIN IF X>0
         THEN BEGIN XH:=1;
                    REPEAT XC:=XH;
                           XH:=(XC+X/XC)/2
                    UNTIL ABS(XC-XH) < 1E-6;
                    SQRTM:=XH
              END
      ELSE WRITE ('АРГУМЕНТ SQRTM ОТРИЦАТЕЛЬНЫЙ', X)
END;
(*РАЗДЕЛ ОПЕРАТОРОВ*)
BEGIN
READ (X,Y);
Y:=Y*Y; X:=X*X;
F:=(SQRTM(X+1)+SQRTM(X+Y))/SQRTM((X+Y)/2);
WRITE(F)
END.
