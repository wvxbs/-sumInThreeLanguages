$initial = get-date -Format ss

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
    $result = sumNumber -firstNumber 0 -lastNumber 1000001


    $final = get-date -Format ss

    Write-Host "Resultado: " $result
    Write-Host "Tempo Decorrido: "  $final - $inital
    
}

main