/*
 * Create the function factorial here
 */

function factorial(number) {
    var product =1;
    while (number != 0) {
        product = number * product;
        number = number -1;
    }
    return product;
}
