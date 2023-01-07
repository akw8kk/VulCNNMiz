static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR1 = VAR2;
    if(0)
    {
        
        FUN3("");
    }
    else
    {
        
        wmemset(VAR1, VAR3'', 50-1); 
        VAR1[50-1] = VAR3''; 
    }
    {
        wchar_t VAR4[50] = VAR3"";
        
        wcscat(VAR4, VAR1);
        FUN4(VAR1);
    }
}