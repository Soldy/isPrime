$primes = 1;
sub isPrime{
   my $number = @_[0];
   for ($i = 2; $i < $number; $i++ ){
       if ($number % $i eq 0){
           return 0;
       }
   }
   return 1;
}
for ($k = 3; $k < 2000000; $k++){
    if (isPrime($k) eq 1){
       $primes++;
    }
}
print " $primes \n";
