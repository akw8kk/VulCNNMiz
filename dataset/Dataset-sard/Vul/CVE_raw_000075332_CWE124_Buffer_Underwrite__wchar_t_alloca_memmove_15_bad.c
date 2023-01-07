void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR2, VAR3'', 100-1);
    VAR2[100-1] = VAR3'';
    switch(6)
    {
    case 6:
        
        VAR1 = VAR2 - 8;
        break;
    default:
        
        FUN3("");
        break;
    }
    {
        wchar_t VAR4[100];
        wmemset(VAR4, VAR3'', 100-1); 
        VAR4[100-1] = VAR3''; 
        
        memmove(VAR1, VAR4, 100*sizeof(wchar_t));
        
        VAR1[100-1] = VAR3'';
        FUN4(VAR1);
    }
}