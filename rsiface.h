diff --git a/src/retroshare/rsiface.h b/src/retroshare/rsiface.h
index 8fe0156a..b4b32875 100644
--- a/src/retroshare/rsiface.h
+++ b/src/retroshare/rsiface.h
@@ -92,6 +92,6 @@ public:
 	virtual void setShutdownCallback(const std::function<void(int)>& callback) = 0;
 
 protected:
-	RsControl() {}	// should not be used, hence it's private.
+	~RsControl() {}	// should not be used, hence it's private.
 };
 
