// Manually creating a promise
const myPromise = new Promise((resolve, reject) => {
    // Simulate some asynchronous work with a timeout
    setTimeout(() => {
        const success = false; // Change to false to test the reject case

        if (success) {
            resolve("Promise resolved successfully!");
        } else {
            reject("Promise rejected.");
        }
    }, 2000); // 2-second delay
});

// Using the promise
myPromise
    .then((message) => {
        console.log(message); // If resolved, log the success message
    })
    .catch((error) => {
        console.error(error); // If rejected, log the error message
    });
