<?php

$primes = 0;

function isPrime($number){
   for ($i = 2; $i < $number; $i++ )
       if ($number % $i == 0)
           return false;
   return true;
}

for ($k = 3; $k < 2000000; $k++)
   if (isPrime($k))
       $primes++;
echo "\n".$primes."\n";
