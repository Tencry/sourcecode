PROGRAM ALGO6A;
VAR X, A, B, R: REAL;
BEGIN
        X := 0.97;
        A := 0.05 * X * X  + 0.39 * X - 0.08;
        B := 0.05 * X * X - 0.08;
        R := A * B;
        WRITE(R);
END.
