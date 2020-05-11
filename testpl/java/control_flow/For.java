class For
{
	public static void main(String[] args) {
		String[] list = { "Orange", "Apple", "Milk", "Tea" };

		for (int i = 0; i < list.length; ++i) {
			System.out.println(list[i]);
		}

		for (int i = list.length - 1; i >= 0; --i) {
			System.out.println(list[i]);
		}

		for (String s : list) {
			System.out.println(s);
		}
	}
}
