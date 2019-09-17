PROGRAM KPACH (INPUT, OUTPUT);
    (*РАЗДЕЛ МЕТОК*)
    LABEL 5;
    (*РАЗДЕЛ ПЕРЕМЕННЫХ*)
    VAR A,K,N:INTEGER;
    (*РАЗДЕЛ ОПЕРАТОРОВ*)
    BEGIN
    READ(N);
    IF N > 0
       THEN BEGIN
            FOR K:=1 TO N DO
                BEGIN
                READ(A);
                IF A=1
                   THEN BEGIN
                        WRITE(K);
                        GOTO 5
                        END
                END;
                WRITE(' КРАСНОГО ШАРА НЕТ.')
            END
    ELSE WRITE(' ОШИБКА В ДАННЫХ.');
    5: END.
