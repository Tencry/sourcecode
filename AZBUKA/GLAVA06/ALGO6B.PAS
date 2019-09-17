PROGRAM ALGO6B;
VAR Y, X, A : REAL;
BEGIN
        X := 0.8;
        A := 2.43;
        Y := (X * X - 2 * A * X + 1) / (X * X - 1);
        WRITE(Y);
END.