fn is_prime(number: u32) -> bool {
//    let limit = (n as f64).sqrt() as u32;
    let limit = number;
    for i in 2..=limit/2 {
        if number % i == 0 {
             return false;
         }
    }
    true
}

fn main(){
   let mut primes : u32 = 0;
   for k in 2..=200000 {
        if is_prime(k) {
           primes +=1;
        }
   }
   println!("{}", primes);
}

