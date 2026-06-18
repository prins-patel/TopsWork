public class FlipkartSearch {

    // Search by product name only
    public void searchProduct(String productName) {
        System.out.println("Searching for product: " + productName);
        System.out.println("Results found for \"" + productName + "\"");
    }

    // Search by product name and category
    public void searchProduct(String productName, String category) {
        System.out.println("Searching for product: " + productName);
        System.out.println("Category: " + category);
        System.out.println("Filtered results found for \"" 
                           + productName + "\" in " + category);
    }

    public static void main(String[] args) {
        FlipkartSearch search = new FlipkartSearch();

        // Search by product name only
        search.searchProduct("iPhone 15");

        System.out.println();

        // Search by product name and category
        search.searchProduct("iPhone 15", "Mobiles");
    }
}
