const express = require('express');
const app = express();

app.get('/', (req, res) => {
	
	console.log('---------------------------------');
	
	let headersHtml = '<h1>Received Request Headers</h1><ul>';
    for (const [header, value] of Object.entries(req.headers)) {
        headersHtml += `<li><strong>${header}:</strong> ${value}</li>`;
		
		console.log(`${header}:${value}`);
		
    }
    headersHtml += '</ul>';
    res.send(`
        <!DOCTYPE html>
        <html lang="en">
        <head>
            <meta charset="UTF-8">
            <meta name="viewport" content="width=device-width, initial-scale=1.0">
            <title>Request Headers</title>
        </head>
        <body>
            ${headersHtml}
        </body>
        </html>
    `);
});

app.listen(3000, () => {
    console.log('Server is running on http://localhost:3000');
});