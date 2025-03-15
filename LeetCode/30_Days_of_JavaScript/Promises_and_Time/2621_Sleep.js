/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
    return new Promise((resolve) => setTimeout(resolve ,millis));
    // await new Promise((resolve) => setTimeout(resolve ,millis)); --> We can do this way too
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */