/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = function (functions) {
    return new Promise((resolve, reject) => {
        let res = [];
        let completed = 0;
        functions.forEach((p, index) => {
            p().then(value => {
                res[index] = value;
                completed++;
                if (completed == functions.length) {
                    resolve(res);
                }
            }).catch((err) => {
                reject(err)
            });
        });
    });
};

// shortcut cheating way 
var promiseAll = async function (functions) {
    try {
        let ans = []
        for (const fn of functions) {
            ans.push(fn());
        }
        return new Promise((resolve) => resolve(Promise.all(ans)));
    } catch (err) {
        return new Promise((reject) => resolve(err));
    }
};

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */