const inicio = Date.now();
let n = 2;

while(Date.now() - inicio < 60000){
    let eh_primo = true;

    for (let d = 2; d * d <= n; d++){
        if (n % d === 0){
            eh_primo = false;
            break;
        }
    }

    if(eh_primo){
        console.log(n);
    }
    n++
}