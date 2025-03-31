public class StringManipulationExample {
    public static void main(String[] args) {
        // 1. Creating and Printing a String
        String str = "  Java Programming  ";
        System.out.println("Original String: '" + str + "'");

        // 2. Trim Whitespaces
        str = str.trim();
        System.out.println("After Trim: '" + str + "'");

        // 3. Convert to Upper and Lower Case
        System.out.println("Uppercase: " + str.toUpperCase());
        System.out.println("Lowercase: " + str.toLowerCase());

        // 4. Find Length
        System.out.println("Length: " + str.length());

        // 5. Extract a Substring
        System.out.println("Substring (0-4): " + str.substring(0, 4));

        // 6. Replace a Word
        String replacedStr = str.replace("Java", "Python");
        System.out.println("After Replacement: " + replacedStr);

        // 7. Check if a String Contains a Word
        System.out.println("Contains 'Programming'?: " + str.contains("Programming"));

        // 8. Splitting a String
        String skills = "Java,Python,C++,JavaScript";
        String[] languages = skills.split(",");
        System.out.println("Split Output:");
        for (String lang : languages) {
            System.out.println(lang);
        }

        // 9. Using StringBuilder for Efficient Manipulation
        StringBuilder sb = new StringBuilder("Hello");
        sb.append(" World!");
        sb.insert(5, ",");
        sb.replace(0, 5, "Hi");
        sb.reverse();
        System.out.println("StringBuilder Result: " + sb.toString());

        // 10. Formatting a String
        String name = "Alice";
        int age = 25;
        String formatted = String.format("My name is %s and I am %d years old.", name, age);
        System.out.println("Formatted String: " + formatted);

        // 11. Converting String to Number
        String numberStr = "100";
        int num = Integer.parseInt(numberStr);
        System.out.println("Number + 50: " + (num + 50));

        // 12. Checking Empty String
        String emptyStr = "";
        System.out.println("Is empty?: " + emptyStr.isEmpty());
    }
}
