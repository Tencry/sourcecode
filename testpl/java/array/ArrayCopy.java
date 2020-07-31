import java.util.Arrays;

class ArrayCopy {
	public static void main(String[] args) {
		char[] source = { 'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!' };
		char[] destination = new char[5];

		System.arraycopy(source, 6, destination, 0, 5);
		System.out.println(new String(destination));

		char[] greeting = Arrays.copyOfRange(source, 0, 4);
		System.out.println(new String(greeting));
	}
}
