
function getLetter(s) {
    let letter;
    // Write your code here
    var mySet1 = new Set(['a','e','i','o','u']);
    var mySet2 = new Set(['b','c','d','f','g']);
    var mySet3 = new Set(['h','j','k','l','m']);
    switch(true){
        case mySet1.has(s[0]):
            letter='A';
            break;
        case mySet2.has(s[0]):
            letter='B';
            break;
        case mySet3.has(s[0]):
            letter='C';
            break;
        default:
            letter='D';
            break;
    }
    return letter;
}
