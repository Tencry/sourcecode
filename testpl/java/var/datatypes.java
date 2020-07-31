class datatypes {
	public static void main(String[] args) {
		byte    b;
		System.out.println(b);
		b = Byte.MIN_VALUE;
		short   s;
		System.out.println(s);
		s = Short.MIN_VALUE;
		int     i;
		System.out.println(i);
		i = Integer.MIN_VALUE;
		long    l;
		System.out.println(l);
		l = Long.MIN_VALUE;
		float   f;
		System.out.println(f);
		f = Float.MIN_VALUE;
		double  d;
		System.out.println(d);
		d = Double.MIN_VALUE;
		boolean B;
		System.out.println(B);
		B = true;
		char    c;
		System.out.println(c);
		c = '\u0000';

		System.out.printf("Byte min and max: %d %d\n", b, Byte.MAX_VALUE);
		System.out.printf("Short min and max: %d %d\n", s, Short.MAX_VALUE);
		System.out.printf("Integer min and max: %d %d\n", i, Integer.MAX_VALUE);
		System.out.printf("Long min and max: %d %d\n", l, Long.MAX_VALUE);
		System.out.printf("Float min and max: %f %f\n", f, Float.MAX_VALUE);
		System.out.printf("Double min and max: %f %f\n", d, Double.MAX_VALUE);
		System.out.printf("Bool is %b\n", B);
		System.out.printf("Char is %c or %c\n", c, Character.MAX_VALUE);
		if ('\u0000' == Character.MIN_VALUE) {
			System.out.println("This is a zero value.\n");
		}
	}
}
