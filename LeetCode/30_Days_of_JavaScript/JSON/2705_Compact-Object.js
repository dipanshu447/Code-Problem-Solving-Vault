/**
 * @param {Object|Array} obj
 * @return {Object|Array}
 */
// efficient solution
var compactObject = function (obj) {
    if(obj === null || typeof obj !== 'object') return obj;
    if(Array.isArray(obj)) return obj.filter(Boolean).map(compactObject);
    const compacted = {};
    for(let key in obj){
        let value = compactObject(obj[key]);
        if(value) compacted[key] = value;
    }
    return compacted;
};

// another way of solving this
var compactObject = function (obj) {
    if(obj === null || typeof obj !== 'object') return obj;
    if(Array.isArray(obj)) {
        return obj.reduce((arr, val) => {
            let res = compactObject(val);
            if(res) arr.push(res);
            return arr;
        },[]);
    };
    if(typeof obj == 'object'){
        return Object.keys(obj).reduce((compacted, key) => {
            let value = compactObject(obj[key]);
             if(value) compacted[key] = value;
             return compacted;
        },{})
    }
    return obj;
};
