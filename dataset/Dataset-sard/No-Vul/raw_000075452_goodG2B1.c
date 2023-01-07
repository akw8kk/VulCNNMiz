static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100];
    wmemset(VAR2, VAR3'', 100-1);
    VAR2[100-1] = VAR3'';
    switch(5)
    {
    case 6:
        
        FUN2("");
        break;
    default:
        
        VAR1 = VAR2;
        break;
    }
    {
        size_t VAR4;
        wchar_t VAR5[100];
        wmemset(VAR5, VAR3'', 100-1); 
        VAR5[100-1] = VAR3''; 
        
        for (VAR4 = 0; VAR4 < 100; VAR4++)
        {
            VAR1[VAR4] = VAR5[VAR4];
        }
        
        VAR1[100-1] = VAR3'';
        FUN3(VAR1);
    }
}