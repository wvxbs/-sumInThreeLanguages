function sumNumber{
    Param ([long]$firstNumber,[long]$lastNumber)

    $i = 0
    while($i -lt $lastNumber) {
        $firstNumber = $i + $firstNumber
        $i = $i + 1
    }

    return $firstNumber
}

function main {
    $initial = [Diagnostics.Stopwatch]::StartNew()

    $result = sumNumber -firstNumber 0 -lastNumber 1000001
    
    $initial.Stop()

    Write-Host "Resultado: $result "
    Write-Host "Tempo Decorrido: $($initial.ElapsedMilliseconds) Milissegundos"
    
}

main