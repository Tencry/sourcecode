PROGRAM FIB (INPUT, OUTPUT);
VAR FC,FCC,FN,K,N:INTEGER;
BEGIN
READ(N);
IF N > 1 THEN BEGIN (* зададим два начальных числа *)
   FC:=1;
   FN:=1;
   WRITE(FC, ' ', FN);
   FOR K:=3 TO N DO BEGIN
       (* переопределить числа, предшествующие вычисляемому *)
       FCC:= FC;
       FC:=FN;
       (* вычислить новое число *)
       FN:=FC+FCC;
       WRITE(' ', FN);
   END
END 
   ELSE WRITELN('ошибка в данных');
END.
