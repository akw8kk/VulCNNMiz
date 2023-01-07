static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    goto VAR4;
VAR4:
    
    VAR1 = VAR3;
    VAR1[0] = VAR5''; 
    {
        wchar_t VAR4[100];
        wmemset(VAR4, VAR5'', 100-1); 
        VAR4[100-1] = VAR5''; 
        
        FUN3(VAR1, 100, VAR5"", VAR4);
        FUN4(VAR1);
    }
}