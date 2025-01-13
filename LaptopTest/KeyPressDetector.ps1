Add-Type -AssemblyName 'System.Windows.Forms'
Add-Type -AssemblyName 'System.Drawing'

$keypress = $null

while ($keypress -ne 'Escape') {
    $keypress = $null
    while (-not [Console]::KeyAvailable) {
        Start-Sleep -Milliseconds 50
    }
    $keyInfo = [Console]::ReadKey($true)
    $keypress = $keyInfo.Key
    Write-Host "You pressed: $keypress"
}
