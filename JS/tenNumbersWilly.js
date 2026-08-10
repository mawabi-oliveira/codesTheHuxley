/* Ler numero N, rodar um loop de 1 a 1000, dentro do loop, 
ler um numero inteiro, se o numero lido for igual a N, somar 1 no contador, 
ler o proximo numero N para reiniciar o processo */


const prompt = require('prompt-sync')();



while (true) {
    
    let n = parseInt(prompt("Digite o número N (ou -1 para parar):"));

   
    if (n === -1 || isNaN(n)) {
        console.log("Programa encerrado.");
        break;
    }

    let contador = 0;

    
    for (let i = 0; i < 5; i++) {
        let num = parseInt(prompt(`Digite o número ${i + 1} de 5:`));
        
        if (num === n) {
            contador++;
        }
    }

    // 4. Exibe o resultado no console (ou use alert)
    console.log(`${n} appeared ${contador} times`);
}