static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR1 = VAR2;
    switch(6)
    {
    case 6:
        
        wmemset(VAR1, VAR3'', 50-1); 
        VAR1[50-1] = VAR3''; 
        break;
    default:
        
        FUN3("");
        break;
    }
    {
        wchar_t VAR4[50] = VAR3"";
        
        wcsncat(VAR4, VAR1, wcslen(VAR1));
        VAR4[50-1] = VAR3''; 
        FUN4(VAR1);
    }
}