//
//  ViewController.swift
//  OpencvMacOS
//
//  Created by csf62615@sina.com on 06/26/2023.
//  Copyright (c) 2023 csf62615@sina.com. All rights reserved.
//

import Cocoa
import opencv2

class ViewController: NSViewController {

  override func viewDidLoad() {
    super.viewDidLoad()
      let image = NSImage(named: .advanced)!
      let mat = Mat(nsImage: image)
      print("")
  }

  override var representedObject: Any? {
    didSet {
    // Update the view, if already loaded.
    }
  }


}

