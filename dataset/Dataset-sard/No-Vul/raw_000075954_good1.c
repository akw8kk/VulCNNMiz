static void FUN1()
{
    switch(5)
    {
    case 6:
        
        FUN2("");
        break;
    default:
    {
        wchar_t VAR1[150], VAR2[100];
        int VAR3;
        
        wmemset(VAR1, VAR4'', 149);
        VAR1[149] = VAR4'';
        for(VAR3=0; VAR3 < 99; VAR3++)
        {
            VAR2[VAR3] = VAR1[VAR3];
        }
        VAR2[99] = VAR4''; 
        FUN3(VAR2);
    }
    break;
    }
}