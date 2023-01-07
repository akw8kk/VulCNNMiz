void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    switch(6)
    {
    case 6:
        
        VAR1 = VAR2;
        VAR1[0] = VAR4''; 
        break;
    default:
        
        FUN3("");
        break;
    }
    {
        size_t VAR5;
        wchar_t VAR6[100];
        wmemset(VAR6, VAR4'', 100-1); 
        VAR6[100-1] = VAR4''; 
        
        for (VAR5 = 0; VAR5 < 100; VAR5++)
        {
            VAR1[VAR5] = VAR6[VAR5];
        }
        VAR1[100-1] = VAR4''; 
        FUN4(VAR1);
    }
}